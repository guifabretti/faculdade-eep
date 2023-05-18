function verificar(){
    let ano = Number(document.getElementById("iano").value)
    let res = document.getElementById("resposta")

    if ((ano%4 === 0 && ano%100 !== 0) || ano%400 === 0 ) {
        res.innerHTML = 'O ano é Bissexto!'
    } else{
        res.innerHTML= 'O ano NÃO é bissexto!'
    }
}