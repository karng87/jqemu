# Special Character
## # comments
## ; command separator
## . charactor match
## " partial quoting
## ' full quoting
## \ escape
## / path separator
## : null command nop
## ! reverse (negative)
## * muliply in (()), wild card
## ? test operator in (()), wild card as a single-charactor
    ((condtion ? then:else))
## $ variable substitution(contents of a variable), end of line in regex
## ${} parameter substitution
## $? exit status value
## $$ processor id

## $[...] integer expansion
## ((..)) indteger expansion

## () command group
## {} block of code
## {} placeholder for text

## [ ] test command
## [ ] range of characters in regex
## [ ] array element
## [[ ]] test keyword

## > &> >> redirection
## < <> 
## << redirection used in a here document, <<END
## <<< redirection used in a here string, <<<"here string"
## \<,\> word boundary, grep '\<the\>' file
## | pipe
## || or
## && and
## & run job in backgorund
## - redirection from/to stdin or stdout
## - previous working dir
## - minus
## ~ home dir
## ~+ $pwd
## ~- $oldpwd
## =~ regular expression match operator
## ^ uppercase conversion in parameter substitution

## <c-a> move cursor to beginning of line of text on the command line
## <c-b> backspace(non destructive)
## <c-c> break
## <c-d> log out from a shell(exit), EOF(end of line)
## <c-e> move end
## <c-f> move forward
## <c-g> bel
## <c-h> del to home
## <c-i> horizontal tab
## <c-j> newline jump
## <c-k> vertical tab
## <c-l> clear 
## <c-m> carrige return
## <c-n>
