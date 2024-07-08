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
    $location = $_POST['location'];

    $stmt = $conn->prepare("SELECT name, address, city, state, pincode, contact FROM centers WHERE city LIKE ?");
    $likeLocation = "%" . $location . "%";
    $stmt->bind_param("s", $likeLocation);
    $stmt->execute();
    $result = $stmt->get_result();

    $centers = [];
    while ($row = $result->fetch_assoc()) {
        $centers[] = $row;
    }

    echo json_encode($centers);
}

$conn->close();
?>
