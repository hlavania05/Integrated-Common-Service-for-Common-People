<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "SchoolDirectory";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$sql = "SELECT name, address, admission_process, fees_structure FROM schools";
$result = $conn->query($sql);

$schools = array();

if ($result->num_rows > 0) {
    while($row = $result->fetch_assoc()) {
        $schools[] = $row;
    }
}

$conn->close();

echo json_encode($schools);
?>
