from unittest import TestCase

from simple_number import SimpleNumber


class TestSimpleNumber(TestCase):
    def test_simple(self):
        self.assertEquals(4, SimpleNumber(2).add(2))
        self.assertEquals(6, SimpleNumber(2).multiply(3))

    def test_wrong_type(self):
        with self.assertRaises(TypeError):
            SimpleNumber('foo')
