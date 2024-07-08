<?php
// Database connection
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "schooldirectory";

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Process user input
$location = $_GET['location'];
$location = mysqli_real_escape_string($conn, $location);

// Query to fetch nearest passport centers
$sql = "SELECT * FROM passport_centers WHERE location_name LIKE '%$location%'";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
    // Display results
    while($row = $result->fetch_assoc()) {
        echo "<div class='passport-center'>";
        echo "<h2>" . $row["center_name"] . "</h2>";
        echo "<p><strong>Location:</strong> " . $row["location_name"] . "</p>";
        echo "<p><strong>Address:</strong> " . $row["address"] . "</p>";
        echo "<p><strong>Contact:</strong> " . $row["contact_number"] . "</p>";
        echo "<p><strong>Email:</strong> " . $row["email"] . "</p>";
        echo "</div>";
    }
} else {
    echo "<p>No results found.</p>";
}

$conn->close();
?>
