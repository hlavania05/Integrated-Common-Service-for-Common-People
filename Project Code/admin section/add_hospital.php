<?php
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

if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    $name = $_POST['name'];
    $address = $_POST['address'];
    $contact_number = $_POST['contact_number'];
    $email = $_POST['email'];
    $description = $_POST['description'];
    $rating = $_POST['rating'];
    $insurance_coverage = $_POST['insurance_coverage'];
    $services = $_POST['services'];
    $facilities = $_POST['facilities'];

    $stmt = $conn->prepare("INSERT INTO hospitals (name, address, contact_number, email, description, rating, insurance_coverage, services, facilities) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)");
    $stmt->bind_param("sssssdsss", $name, $address, $contact_number, $email, $description, $rating, $insurance_coverage, $services, $facilities);

    if ($stmt->execute()) {
        echo "Hospital added successfully.";
    } else {
        echo "Error: " . $stmt->error;
    }

    $stmt->close();
}

$conn->close();
?>
