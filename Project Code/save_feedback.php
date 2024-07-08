<?php
// Assuming your database credentials
$servername = "localhost";
$username = "root";
$password = ""; // Password if applicable
$dbname = "schooldirectory"; // Your database name

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Process form data
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $name = $_POST['name'];
    $phone = $_POST['phone'];
    $email = $_POST['email'];
    $answer = $_POST['answer'];
    $satisfaction = $_POST['satisfaction'];
    $rating = $_POST['rating'];
    $message = $_POST['message'];

    // Prepare SQL statement
    $sql = "INSERT INTO feedback (name, phone, email, answer, satisfaction, rating, message)
            VALUES ('$name', '$phone', '$email', '$answer', '$satisfaction', '$rating', '$message')";

    if ($conn->query($sql) === TRUE) {
        // Successful insertion
        echo json_encode(array("status" => "success"));
    } else {
        // Error in insertion
        echo json_encode(array("status" => "error", "message" => "Error: " . $sql . "<br>" . $conn->error));
    }
}

$conn->close();
?>
