from unittest import TestCase, mock

from simple_number import SimpleNumber


class TestSimpleNumber(TestCase):
    def test_add(self):
        number = SimpleNumber(2)
        self.assertEqual(number.add(2), 4.0)

    def test_multiply(self):
        number = SimpleNumber(2)
        self.assertEqual(number.multiply(3), 12)

    def test_invalid_type(self):
        with self.assertRaises(TypeError):
            SimpleNumber('foo')

    def test_fetch_results(self):
        number = SimpleNumber(2)
        with mock.patch('requests.get') as mock_get:
            mock_get().json.return_value = [1, 2, 3]
            self.assertEquals(number.fetch_results(), [1, 2, 3])

    def test_fetch_result_error(self):
        number = SimpleNumber(2)
        with mock.patch('requests.get') as mock_get:
            mock_get().json.side_effect = Exception('Boom!')
            self.assertEquals(number.fetch_results(), None)
