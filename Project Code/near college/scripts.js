document.addEventListener('DOMContentLoaded', function() {
    fetchColleges();
});

function fetchColleges() {
    fetch('fetch_colleges.php')
        .then(response => response.json())
        .then(data => {
            displayColleges(data);
        })
        .catch(error => console.error('Error fetching colleges:', error));
}

function displayColleges(colleges) {
    const collegesList = document.getElementById('collegesList');

    colleges.forEach(college => {
        const collegeDiv = document.createElement('div');
        collegeDiv.classList.add('college');

        collegeDiv.innerHTML = `
            <h2>${college.name}</h2>
            <p><strong>Location:</strong> ${college.location}</p>
            <p><strong>Programs Offered:</strong></p>
            <ul>
                <li><strong>Undergraduate:</strong> ${college.undergraduate}</li>
                <li><strong>Graduate:</strong> ${college.graduate}</li>
                <li><strong>Certificate Courses:</strong> ${college.certificate_courses}</li>
            </ul>
            <p><strong>Admission Information:</strong></p>
            <ul>
                <li><strong>Eligibility Criteria:</strong> ${college.eligibility_criteria}</li>
                <li><strong>Admission Process:</strong> ${college.admission_process}</li>
                <li><strong>Application Form:</strong> ${college.application_form}</li>
                <li><strong>Tuition Fees:</strong> ${college.tuition_fees}</li>
            </ul>
            <p><strong>Additional Fees:</strong></p>
            <ul>
                <li><strong>Hostel Fees:</strong> ${college.hostel_fees}</li>
                <li><strong>Bus Fees:</strong> ${college.bus_fees}</li>
            </ul>
            <p><strong>Contact Information:</strong></p>
            <ul>
                <li><strong>Phone Number:</strong> ${college.phone_number}</li>
                <li><strong>Email Address:</strong> ${college.email}</li>
            </ul>
        `;

        collegesList.appendChild(collegeDiv);
    });
}
