<?php

use Alura\Banco\modelo\Endereco;

require_once 'autoload.php';

$umEndereco = new Endereco('Petrópolis', 'bairro qualquer', 'Minha rua', '71b');
$outroEndereco = new Endereco('Rio', 'Centro', 'Uma rua aí','50');

echo $umEndereco->cidade;

exit();
echo $umEndereco . PHP_EOL;
echo $outroEndereco . PHP_EOL;


?>