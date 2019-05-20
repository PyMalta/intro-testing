<?php
declare(strict_types=1);

use PHPUnit\Framework\TestCase;

final class SimpleNumberTest extends TestCase {
    public function testCannotBeCreatedFromInvalidType(): void
    {
        $this->expectException(InvalidArgumentException::class);

        $number = new SimpleNumber('foo');
    }

    public function testAdd(): void {
        $two = new SimpleNumber(2);
        $this->assertSame(4, $two->add(2));
    }

    public function testMultiply(): void {
        $two = new SimpleNumber(2);
        $this->assertSame(6, $two->multiply(3));
    }
}