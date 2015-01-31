from jinja2 import Template
import sys

def generate(tpl_file, out_file, total):
    with open(tpl_file) as f:
        template_string = f.read()

    template = Template(template_string)
    output =  template.render(n = total)

    with open(out_file, "w") as f:
        f.write(output)

if __name__ == "__main__":
    total = int(sys.argv[3])
    out_file = sys.argv[2]
    tpl_file = sys.argv[1]

    generate(tpl_file, out_file, total)
