function acrescentarMinutagem() {
    var horario = document.getElementById('horario').value;
    var minutagem = parseInt(document.getElementById('minutagem').value);

    var horaAtual = new Date('2000-01-01T' + horario); // Utiliza uma data fixa para converter apenas o horário

    // Acrescenta a minutagem ao horário
    horaAtual.setMinutes(horaAtual.getMinutes() + minutagem);

    // Formata o resultado
    var resultado = horaAtual.getHours().toString().padStart(2, '0') + ':' + horaAtual.getMinutes().toString().padStart(2, '0');

    // Exibe o resultado
    document.getElementById('resultado').innerHTML = "Novo horário: " + resultado;
}
