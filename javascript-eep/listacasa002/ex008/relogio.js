function atualizarRelogio(){
    const dataAtual = new Date()
    const horas = String(dataAtual.getHours()).padStart(2, '0');
    const minutos = String(dataAtual.getMinutes()).padStart(2, '0');
    const segundos = String(dataAtual.getSeconds()).padStart(2, '0');

    let res = document.querySelector('section#resultado')
    res.innerHTML = `${horas}:${minutos}:${segundos}`
}
    setInterval(atualizarRelogio, 1000)


