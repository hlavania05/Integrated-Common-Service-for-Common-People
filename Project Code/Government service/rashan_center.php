<?php
// Establish MySQL connection
$servername = "localhost";
$username = "root"; // Replace with your MySQL username
$password = ""; // Replace with your MySQL password
$dbname = "schooldirectory"; // Replace with your MySQL database name

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Get location from query parameter
$location = $_GET['location'];

// Prepare and execute MySQL query
$sql = "SELECT * FROM rashan_stores WHERE location = '$location'";
$result = $conn->query($sql);

// Check if results exist and prepare JSON response
if ($result->num_rows > 0) {
    $stores = array();
    while($row = $result->fetch_assoc()) {
        $stores[] = $row;
    }
    echo json_encode($stores);
} else {
    echo json_encode(array()); // Return empty array if no results found
}

$conn->close();
?>
