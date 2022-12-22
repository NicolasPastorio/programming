const numeros = [100, 200, 300, 400, 500, 600]

console.log('Decremento de 1')
for(let i = numeros.length - 1; i >= 0; i--){
  console.log(numeros[i])
}

console.log('Decremento de 2')
for(let i = numeros.length - 1; i >= 0; i -= 2){
  console.log(numeros[i])
}

console.log('Decremento de 2 com condição de parada de 300')
for(let i = numeros.length - 1; numeros[i] >= 300; i -= 2){
  console.log(numeros[i])
}

// ---------------------------------------
const numerosPares = []
console.log('Números pares de 0 100')
console.log(numerosPares)
for(let i = 0; i < 100; i += 2){
  numerosPares.push(i)
}
console.log(numerosPares)
