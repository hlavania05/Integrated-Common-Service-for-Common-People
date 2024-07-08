<?php
// Database connection details
$servername = "localhost";
$username = "root"; // Replace with your MySQL username
$password = ""; // Replace with your MySQL password
$dbname = "schooldirectory"; // Replace with your database name

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Escape user inputs for security
$name = $conn->real_escape_string($_POST['name']);
$email = $conn->real_escape_string($_POST['email']);
$message = $conn->real_escape_string($_POST['message']);

// Insert user data into database
$sql = "INSERT INTO contact (name, email, message) VALUES ('$name', '$email', '$message')";

if ($conn->query($sql) === TRUE) {
    echo "<p class='alert alert-success'>We will contact you soon.</p>";
} else {
    echo "<p class='alert alert-danger'>Error: " . $sql . "<br>" . $conn->error . "</p>";
}

// Close database connection
$conn->close();
?>
