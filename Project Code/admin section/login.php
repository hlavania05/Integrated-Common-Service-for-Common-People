<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $username = $_POST['username'];
    $password = $_POST['password'];

    if ($username === 'IntelProject' && $password === '05112004') {
        header('Location: adminpage.html');
        exit();
    } else {
        echo '<script>
                document.addEventListener("DOMContentLoaded", function() {
                    document.getElementById("error-message").textContent = "Invalid username or password";
                });
              </script>';
        include 'index.html';
    }
}
?>
