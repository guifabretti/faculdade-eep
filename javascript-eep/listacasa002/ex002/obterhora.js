function obter(){
    let dataAtual = new Date()
    let hora = dataAtual.getHours()
    let min = dataAtual.getMinutes()
    let seg = dataAtual.getSeconds()

    let res = document.querySelector('section#saida');

    res.innerHTML = `<p>${hora}:${min}:${seg}</p>`
}