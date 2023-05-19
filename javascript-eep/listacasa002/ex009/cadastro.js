function validarFormulario(event) {
    event.preventDefault()

    const idade = document.getElementById('iidade').value;

    let validacaoOk = true;

    if (idade < 18 || idade > 120) {
        document.getElementById('iidade').classList.add('error');
        window.alert('Formulário inválido.');
        validacaoOk = false;
    } else {
        document.getElementById('iidade').classList.remove('error');
    }

    if (validacaoOk) {
      window.alert('Formulário válido. Enviando...');
    }
  }