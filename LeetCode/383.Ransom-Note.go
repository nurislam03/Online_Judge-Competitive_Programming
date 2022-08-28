func canConstruct(ransomNote string, magazine string) bool {
    counterMap := map[string]int{}
    
    for _, ch := range magazine {
        counterMap[string(ch)] += 1
    }
    for _, ch := range ransomNote {
        counterMap[string(ch)]--
        if counterMap[string(ch)] < 0 {
            return false
        }
    }
    
    return true
}
