
//FALTA TERMINAR

function verificar(){
    let atual = Number(new Date.getFullYear())
    let ano = Number(document.getElementById("iano"))

    let idade = atual - ano
    
    let res = document.getElementById("resposta")

    res.innerHTML = `<p>Você tem ${idade} anos</p>`

}

//FALTA TERMINAR