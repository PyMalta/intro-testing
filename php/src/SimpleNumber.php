<?php
declare(strict_types=1);

final class SimpleNumber {
    private $x;

    public function __construct($num) {
        if (!(is_float($num) || is_int($num))) {
            throw new InvalidArgumentException(
                sprintf(
                    '"%s" is not a valid type, must be either a float or int',
                    $num
                )
            );
        }

        $this->x = $num;
    }

    public function add($y) {
        return $this->x + $y;
    }

    public function multiply($y) {
        return $this->x * $y;
    }
}