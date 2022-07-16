<?php
	
require __DIR__ . '/vendor/autoload.php';

class PrimeFactors{
	public function generate(int $num){
		
		//Getting the Prime Factors from 1 to n
		$prime = [2,3,4,5,7];
		
		$primefactor = [];
		
		for($i = 0; $i < 5; $i++){
			while(($num%$prime[$i]) == 0){
				$num/=$prime[$i];
				$primefactor[] = $prime[$i];
			}
		}
		
		if($num != 1){
			$primefactor[] = $num;
		}
		
		//Returning an array of prime factors
		return array_unique($primefactor);
	}
	
	
	
}
?>