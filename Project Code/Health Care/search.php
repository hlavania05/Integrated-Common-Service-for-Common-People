<?php
// Connect to MySQL
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "schooldirectory";

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Fetch hospitals based on location or criteria
$location = $_POST['location']; // Example, should sanitize and validate input
$sql = "SELECT * FROM hospitals WHERE address LIKE '%$location%'";
$result = $conn->query($sql);

// Prepare JSON response
$response = [];
if ($result->num_rows > 0) {
    while($row = $result->fetch_assoc()) {
        $response[] = $row;
    }
}

// Return JSON response
header('Content-Type: application/json');
echo json_encode($response);

$conn->close();
?>
