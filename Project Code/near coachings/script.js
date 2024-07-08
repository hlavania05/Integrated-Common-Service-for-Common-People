document.addEventListener('DOMContentLoaded', function() {
    fetch('fetch_coaching_centers.php')
        .then(response => response.json())
        .then(data => {
            data.forEach(coachingCenter => {
                const coachingCenterDiv = document.createElement('div');
                coachingCenterDiv.classList.add('coaching-center');
                coachingCenterDiv.innerHTML = `
                    <h2>${coachingCenter.name}</h2>
                    <p><strong>Courses Offered:</strong> ${coachingCenter.courses}</p>
                    <p><strong>Admission Process:</strong> ${coachingCenter.admission_process}</p>
                    <p><strong>Location:</strong> ${coachingCenter.location}</p>
                    <p><strong>Faculty:</strong> ${coachingCenter.faculty}</p>
                    <p><strong>Fee Structure:</strong> ${coachingCenter.fee_structure}</p>
                    <p><strong>Contact:</strong> ${coachingCenter.contact_info}</p>
                `;
                document.getElementById('coaching-centers').appendChild(coachingCenterDiv);
            });
        })
        .catch(error => {
            console.error('Error fetching data:', error);
        });
});
