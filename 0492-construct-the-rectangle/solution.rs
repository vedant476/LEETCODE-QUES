impl Solution {

    pub fn construct_rectangle(area: i32) -> Vec<i32> {

        let mut s = (area as f64).sqrt() as i32;

        while area % s != 0 {
            s -= 1;
        }

        vec![area / s, s]
    }
}