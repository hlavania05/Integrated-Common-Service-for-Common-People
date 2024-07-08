<?php
// Database connection
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

// Prepare and sanitize inputs
$center_name = mysqli_real_escape_string($conn, $_POST['center_name']);
$location_name = mysqli_real_escape_string($conn, $_POST['location_name']);
$address = mysqli_real_escape_string($conn, $_POST['address']);
$contact_number = mysqli_real_escape_string($conn, $_POST['contact_number']);
$email = mysqli_real_escape_string($conn, $_POST['email']);

// SQL query to insert data into database
$sql = "INSERT INTO passport_centers (center_name, location_name, address, contact_number, email)
        VALUES ('$center_name', '$location_name', '$address', '$contact_number', '$email')";

if ($conn->query($sql) === TRUE) {
    echo "New record created successfully";
} else {
    echo "Error: " . $sql . "<br>" . $conn->error;
}

$conn->close();
?>
