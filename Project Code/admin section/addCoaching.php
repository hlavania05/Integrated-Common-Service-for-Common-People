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

// Escape user inputs for security
$name = $conn->real_escape_string($_POST['name']);
$courses_offered = $conn->real_escape_string($_POST['courses_offered']);
$admission_process = $conn->real_escape_string($_POST['admission_process']);
$location = $conn->real_escape_string($_POST['location']);
$faculty_name = $conn->real_escape_string($_POST['faculty_name']);
$fee_structure = $conn->real_escape_string($_POST['fee_structure']);
$contact_info = $conn->real_escape_string($_POST['contact_info']);

// Insert data into coaching_centers table
$sql = "INSERT INTO coaching_centers (name, courses_offered, admission_process, location, faculty_name, fee_structure, contact_info)
        VALUES ('$name', '$courses_offered', '$admission_process', '$location', '$faculty_name', '$fee_structure', '$contact_info')";

if ($conn->query($sql) === TRUE) {
    echo "New record created successfully";
} else {
    echo "Error: " . $sql . "<br>" . $conn->error;
}

$conn->close();

?>
