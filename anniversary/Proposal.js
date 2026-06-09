const reasons = [

"Because every moment with you feels special ❤️",

"Because your smile makes my worst days better ✨",

"Because you are my favorite place to be 💕",

"Because I want every future memory to have you in it 🌸",

"Because my heart already chose you 💍 Tar thekeo boro kotha tor bou hoi biye korbi ni mane... huhhh... albat korbi noile kamlee debo puk puk koreee 😉❤️"

];

let count = 0;

const reasonBtn = document.getElementById("reasonBtn");
const reasonText = document.getElementById("reasonText");
const foreverBtn = document.getElementById("foreverBtn");

const proposalPage = document.getElementById("proposalPage");
const successPage = document.getElementById("successPage");

function showSuccess() {

    proposalPage.style.opacity = "0";

    setTimeout(() => {

        proposalPage.style.display = "none";

        successPage.classList.add("show");

    }, 800);

}

reasonBtn.addEventListener("click", () => {

    // Show reasons one by one
    if (count < reasons.length) {

        reasonText.textContent = reasons[count];

        count++;

        // Last reason reached
        if (count === reasons.length) {

            reasonBtn.innerHTML = "💕 Okay... You Win";

        }

    } 
    // After button becomes "Okay... You Win"
    else {

        showSuccess();

    }

});

foreverBtn.addEventListener("click", () => {

    showSuccess();

});
