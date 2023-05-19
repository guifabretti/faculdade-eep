function calcularSoma() {
    const num1 = Number(document.getElementById('num1').value);
    const num2 = Number(document.getElementById('num2').value);
    const resultado = num1 + num2;
    document.getElementById('resultado').textContent = `Resultado: ${resultado}`;
}
  
function calcularSubtracao() {
    const num1 = Number(document.getElementById('num1').value);
    const num2 = Number(document.getElementById('num2').value);
    const resultado = num1 - num2;
    document.getElementById('resultado').textContent = `Resultado: ${resultado}`;
}
  
function calcularMultiplicacao() {
    const num1 = Number(document.getElementById('num1').value);
    const num2 = Number(document.getElementById('num2').value);
    const resultado = num1 * num2;
    document.getElementById('resultado').textContent = `Resultado: ${resultado}`;
}
  
  function calcularDivisao() {
    const num1 = Number(document.getElementById('num1').value);
    const num2 = Number(document.getElementById('num2').value);
    const resultado = num1 / num2;
    document.getElementById('resultado').textContent = `Resultado: ${resultado}`;
}