module Next = {
  type t('a);

  [@bs.get] external done_: t(_) => bool = "done";
  [@bs.get] [@bs.return nullable] external value: t('a) => option('a) = "";
};

type t('a);

[@bs.send] external next: t('a) => Next.t('a) = "";
