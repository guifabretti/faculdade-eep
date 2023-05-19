function mostrarSenha(){
    var senha = document.getElementById("isenha")
    if(senha.type=="password"){
        senha.type = "text"
    } else{
        senha.type = "password"
    }
}

function validarLogin(event) {
    event.preventDefault()

    const username = document.getElementById('inome').value;
    const password = document.getElementById('isenha').value;

    const usuarioCorreto = 'usuario';
    const senhaCorreta = 'senha';

    if (username === usuarioCorreto && password === senhaCorreta) {
      document.getElementById('mensagem').textContent = 'Acesso permitido';
    } else {
      document.getElementById('mensagem').textContent = 'Acesso negado';
    }
  }