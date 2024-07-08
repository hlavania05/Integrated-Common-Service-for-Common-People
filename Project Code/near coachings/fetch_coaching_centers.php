<?php

// Assuming you have a database connection established
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

// SQL query to fetch coaching centers data
$sql = "SELECT * FROM coaching_centers";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
    $coachingCenters = array();

    // Fetch data and format it into an array
    while ($row = $result->fetch_assoc()) {
        $coachingCenter = array(
            "name" => $row["name"],
            "courses" => $row["courses_offered"],
            "admission_process" => $row["admission_process"],
            "location" => $row["location"],
            "faculty" => $row["faculty_name"],
            "fee_structure" => $row["fee_structure"],
            "contact_info" => $row["contact_info"]
        );
        $coachingCenters[] = $coachingCenter;
    }

    // Encode the array as JSON and output it
    header('Content-Type: application/json');
    echo json_encode($coachingCenters);
} else {
    // No coaching centers found
    echo "No coaching centers found.";
}

$conn->close();

?>
