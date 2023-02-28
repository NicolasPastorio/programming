<?php

namespace Alura\Banco\Modelo\Conta;

abstract class Conta
{
  private Titular $titular;
  protected float $saldo;
  private static int $numeroDeContas = 0;

  public function __construct(Titular $titular)
  {
    $this->titular = $titular;
    $this->saldo = 0;

    //para acessar atributos e métodos estáticos(classe atual)
    // Conta::$numeroDeContas++;
    self::$numeroDeContas++;
  }

  public function __destruct()
  {
      self::$numeroDeContas--;
  }

  //--------------------------------------------------
  //Manipulação do saldo
  //método sacar
  public function sacar(float $valorASacar):void
  {
    $tarifaSaque = $valorASacar * $this->percentualTarifa();
    $valorSaque = $valorASacar + $tarifaSaque;
    if($valorSaque > $this->saldo){
      echo "Saldo indisponível" . PHP_EOL;
      return;
    }
    $this->saldo -= $valorSaque;
  }
  //método depositar
  public function depositar(float $valorADepositar): void
  {
    if($valorADepositar <= 0){
      echo "Valor incorreto para depósito!". PHP_EOL;
      return;
    }
    $this->saldo += $valorADepositar;
  }
  
  // método para ver o saldo
  public function recuperarSaldo(): float
  {
    return $this->saldo;
  }
  //--------------------------------------------------
  public function recuperaNomeTitular(): string
  {
    return $this->titular->recuperaNome();
  }
  public function recuperaCpfTitular(): string
  {
    return $this->titular->recuperaCpf();
  }
  //--------------------------------------------------

  public static function recuperarNumeroDeContas(): int
  {
    // return Conta::$numeroDeContas;
    return self::$numeroDeContas;
  }

  abstract protected function percentualTarifa(): float;
}
