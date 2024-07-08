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
    $city = $_POST['city'];
    $state = $_POST['state'];
    $pincode = $_POST['pincode'];
    $contact = $_POST['contact'];

    $stmt = $conn->prepare("INSERT INTO centers (name, address, city, state, pincode, contact) VALUES (?, ?, ?, ?, ?, ?)");
    $stmt->bind_param("ssssss", $name, $address, $city, $state, $pincode, $contact);

    if ($stmt->execute()) {
        echo "Aadhar center added successfully.";
    } else {
        echo "Error: " . $stmt->error;
    }

    $stmt->close();
}

$conn->close();
?>
