
;; Function main (main)

main ()
{
  union a obj;
  int D.1747;
  const char * restrict D.1746;
  unsigned int D.1745;
  const char * restrict D.1744;
  int D.1743;
  const char * restrict D.1742;
  unsigned int D.1741;

  bzero (&obj, 4);
  obj.a = 383;
  obj.c = 97;
  D.1741 = (unsigned int) &obj.a;
  D.1742 = (const char * restrict) &"%08x\n"[0];
  printf (D.1742, D.1741);
  D.1743 = obj.a;
  D.1744 = (const char * restrict) &"%d\n"[0];
  printf (D.1744, D.1743);
  D.1745 = (unsigned int) &obj.c;
  D.1746 = (const char * restrict) &"%08x\n"[0];
  printf (D.1746, D.1745);
  fun (&obj);
  D.1747 = 0;
  goto <D.1748>;
  <D.1748>:
  return D.1747;
}



;; Function fun (fun)

fun (union obj * obj1)
{
  const char * restrict D.1754;
  int D.1753;
  char D.1752;
  const char * restrict D.1751;
  unsigned int D.1750;
  char * D.1749;

  D.1749 = &obj1->c;
  D.1750 = (unsigned int) D.1749;
  D.1751 = (const char * restrict) &"%08x\n"[0];
  printf (D.1751, D.1750);
  D.1752 = obj1->c;
  D.1753 = (int) D.1752;
  D.1754 = (const char * restrict) &"%d\n"[0];
  printf (D.1754, D.1753);
  goto <D.1755>;
  <D.1755>:
  return;
}

