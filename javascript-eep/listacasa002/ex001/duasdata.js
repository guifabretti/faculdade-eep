function calcular() {
  window.alert('Digite duas datas, a primeira sendo menor que a segunda')
  let data1 = new Date(window.prompt('Digite uma data: (ano-mes-dia) '))
  let data2 = new Date(window.prompt('Digite outra data: (ano-mes-dia) '))
  const DiaEmMilis = 86400000;

  let diferenca = data2.getTime() - data1.getTime();
  diferenca = Math.floor(diferenca / DiaEmMilis);
  let diferencaAnos = diferenca/365

  let res = document.querySelector('section#saida');

  if (diferenca > 365) {
    res.innerHTML = `<p>A diferença em dias é de: ${diferenca}</p>`;
    res.innerHTML += `<p>A diferença em anos é de: ${diferencaAnos}</p>`;
  } else {
    res.innerHTML = `<p>A diferença em dias é de: ${diferenca}</p>`;
  }
}
