function maior(){
    let n1 = Number(window.prompt('Digite um numero'))
    let n2 = Number(window.prompt('Digite outro numero'))

    let res = document.querySelector('section#saida')

    if (n1 > n2) {
        res.innerHTML = `<p>${n1} é maior que ${n2}</p>`
    } else if (n1 < n2) {
        res.innerHTML = `<p>${n2} é maior que ${n1}</p>`
    } else{
        res.innerHTML = `<p>Os numeros ${n1} e ${n2} são iguais</p>`
    }
}