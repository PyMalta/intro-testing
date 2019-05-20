#!/bin/bash -eux
[ ! -d "./vendor" ] && composer update
./vendor/bin/phpunit --bootstrap vendor/autoload.php tests/SimpleNumberTest
