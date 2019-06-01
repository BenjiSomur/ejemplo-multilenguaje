#!usr/bin/ruby

input = $stdin.gets

elements = input.split("\n")

elements.each do |numero|
    resultado = Integer(numero) * 2
    $stdout.puts resultado
    $stdout.puts "\n"
    $stdout.flush
end
