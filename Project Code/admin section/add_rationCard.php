<?php
// Database configuration
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

// Prepare and bind
$stmt = $conn->prepare("INSERT INTO rashan_stores (name, address, contact_number, email, description, rating, services, facilities, location) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)");
$stmt->bind_param("sssssdsss", $name, $address, $contact_number, $email, $description, $rating, $services, $facilities, $location);

// Set parameters and execute
$name = $_POST['name'];
$address = $_POST['address'];
$contact_number = $_POST['contact_number'];
$email = $_POST['email'];
$description = $_POST['description'];
$rating = $_POST['rating'];
$services = $_POST['services'];
$facilities = $_POST['facilities'];
$location = $_POST['location'];

if ($stmt->execute()) {
    echo "New rashan center added successfully";
} else {
    echo "Error: " . $stmt->error;
}

$stmt->close();
$conn->close();
?>
