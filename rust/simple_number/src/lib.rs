#[derive(Debug)]
struct SimpleNumber {
    x: i32,
}

impl SimpleNumber {
    fn add(&self, y: i32) -> i32 {
        self.x + y
    }
    fn multiply(&self, y: i32) -> i32 {
        self.x * y
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn add() {
        let number = SimpleNumber { x: 2 };
        assert_eq!(number.add(2), 4);
    }

    #[test]
    fn multiply() {
        let number = SimpleNumber { x: 2 };
        assert_eq!(number.multiply(3), 6);
    }
}
