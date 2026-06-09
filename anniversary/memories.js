function openMemory(title,text,image){

document.getElementById("popup")
.style.display="flex";

document.getElementById("title")
.innerText=title;

document.getElementById("text")
.innerText=text;

document.getElementById("photo")
.src=image;

createHearts();

}

function closePopup(){

document.getElementById("popup")
.style.display="none";

}

function createHearts(){

for(let i=0;i<20;i++){

let heart=
document.createElement("div");

heart.innerHTML="❤️";

heart.style.position="fixed";

heart.style.left=
Math.random()*100+"vw";

heart.style.top="100vh";

heart.style.fontSize="25px";

heart.style.pointerEvents="none";

document.body.appendChild(heart);

let pos=100;

let anim=setInterval(()=>{

pos-=2;

heart.style.top=
pos+"vh";

heart.style.opacity=
pos/100;

if(pos<=0){

clearInterval(anim);

heart.remove();

}

},20);

}

}