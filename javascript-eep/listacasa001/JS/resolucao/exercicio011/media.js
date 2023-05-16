function media(){
    let nome = window.prompt('Qual é o nome do aluno?')
    let n1 = Number(window.prompt(`Qual foi a primeira nota de ${nome}?`))
    let n2 = Number(window.prompt(`Qual foi a segunda nota de ${nome}?`))

    med = (n1 + n2) / 2

    let msg 
    if (med >= 6) {
        msg = 'Meus parabéns!'
    } else{
        msg = 'Estude mais!'
    }

    let res = document.getElementById('situation')
    res.innerHTML = `<p>Calculando a média final de <mark>${nome}</mark>.</p>`
    res.innerHTML += `<p>As notas obtidas foram <strong>${n1}</strong> e <strong>${n2}</strong></p>`
    res.innerHTML += `<p>A média final será: <mark>${med}</mark></p>`
    res.innerHTML += `<p style='color: red; font-weight: bolder;'>${msg}</p>`
}


