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

// Get form data
$name = $_POST['name'];
$address = $_POST['address'];
$admission_process = $_POST['admission_process'];
$fees_structure = $_POST['fees_structure'];

// Insert data into the database
$sql = "INSERT INTO schools (name, address, admission_process, fees_structure) VALUES (?, ?, ?, ?)";
$stmt = $conn->prepare($sql);
$stmt->bind_param("ssss", $name, $address, $admission_process, $fees_structure);

if ($stmt->execute()) {
    echo "New school added successfully";
} else {
    echo "Error: " . $stmt->error;
}

$stmt->close();
$conn->close();
?>
