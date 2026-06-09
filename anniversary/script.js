let count = 3;

const countdown = document.getElementById("countdown");

const timer = setInterval(() => {

count--;

if(count > 0){

countdown.innerText = count;

}else{

clearInterval(timer);

blowCandles();

}

},1000);

function blowCandles(){

const flames =
document.querySelectorAll(".flame");

flames.forEach(flame=>{

flame.outerHTML =
'<div class="smoke">💨</div>';

});

countdown.innerHTML =
"❤️";

document.getElementById("wishText")
.innerHTML =
"Your wish has been made...";

setTimeout(()=>{

document.body.classList.add("fadeout");

},1500);

setTimeout(()=>{

window.location.href =
"memories.html";

},3500);

}