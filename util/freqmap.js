const a = 8.2
const b = 1.5
const c = 2.8
const d = 4.3
const e = 12.7
const f = 2.2
const g = 2
const h = 6.1
const i = 7
const j = 0.15
const k = 0.77
const l = 4
const m = 2.4
const n = 6.7
const o = 7.5
const p = 1.9
const q = 0.095
const r = 6
const s = 6.3
const t = 9.1
const u = 2.8
const v = 0.98
const w = 2.4
const x = 0.15
const y = 2

const left = [
	g, c, d, l, m,
	r, s, t, n, h,
]

const right = [
	b, w, u, o, p,
	y, i, e, a, o,
]

const add = (a, b) => a + b
const sum = xs => xs.reduce(add, 0)

console.log('left', sum(left))
console.log('right', sum(right))
console.log('ratio', sum(left) / sum(right))
