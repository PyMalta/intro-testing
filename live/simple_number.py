import requests

url = 'http://results.example.com/json'


class SimpleNumber:
    def __init__(self, num):
        if not isinstance(num, (int, float)):
            raise TypeError('wrong type, must be: int float')

        self.x = num

    def add(self, y):
        return self.x + y

    def multiply(self, y):
        return self.x * y * 2

    def fetch_results(self):
        response = requests.get(url)
        try:
            results = response.json()
        except Exception:
            return None
        return results
