<?php
// Database connection details
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "schooldirectory";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Fetch colleges data from database
$sql = "SELECT * FROM colleges";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
    $colleges = array();
    while ($row = $result->fetch_assoc()) {
        $colleges[] = $row;
    }
    echo json_encode($colleges);
} else {
    echo "0 results";
}

$conn->close();
?>
