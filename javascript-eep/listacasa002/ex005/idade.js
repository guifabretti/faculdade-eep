function verificar(){
    let hoje = new Date()
    let ano = Number(document.getElementById("iano").value)

    let idade = hoje.getFullYear() - ano
    
    let res = document.getElementById("resposta")

    res.innerHTML = `<p>Você tem ${idade} anos</p>`

}