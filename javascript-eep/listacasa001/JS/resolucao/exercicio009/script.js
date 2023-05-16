let contador = 0
let res = document.querySelector('section#result')

function contar(){
    contador ++ //mesma coisa que contador = contador + 1
    res.innerHTML = `<p>O contador está com <mark>${contador}</mark> cliques.</p>`
}

function zerar(){
    contador = 0
    res.innerHTML = `<p>O contador está com <mark>0</mark> cliques.</p>`
}