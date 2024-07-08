<?php
// Database connection details
$servername = "localhost";
$username = "username";
$password = "password";
$dbname = "your_database_name";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Prepare and bind
$stmt = $conn->prepare("INSERT INTO colleges (name, location, undergraduate, graduate, certificate_courses, eligibility_criteria, admission_process, application_form, tuition_fees, hostel_fees, bus_fees, phone_number, email) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)");
$stmt->bind_param("ssssssssdssds", $name, $location, $undergraduate, $graduate, $certificate_courses, $eligibility_criteria, $admission_process, $application_form, $tuition_fees, $hostel_fees, $bus_fees, $phone_number, $email);

// Set parameters and execute
$name = $_POST['name'];
$location = $_POST['location'];
$undergraduate = $_POST['undergraduate'];
$graduate = $_POST['graduate'];
$certificate_courses = $_POST['certificate_courses'];
$eligibility_criteria = $_POST['eligibility_criteria'];
$admission_process = $_POST['admission_process'];
$application_form = $_POST['application_form'];
$tuition_fees = $_POST['tuition_fees'];
$hostel_fees = $_POST['hostel_fees'];
$bus_fees = $_POST['bus_fees'];
$phone_number = $_POST['phone_number'];
$email = $_POST['email'];

if ($stmt->execute()) {
    echo "New college record created successfully";
} else {
    echo "Error: " . $stmt->error;
}

$stmt->close();
$conn->close();
?>
