<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */

?>
<?php if (!empty($title)): ?>
  <h2><?php print $title; ?></h2>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="col-md-4 ' . $classes_array[$id] .'"';  } ?>>
    <a href="<?php print url('forum/') . $variables['view']->result[$id]->field_field_machine_name[0]['raw']['value']; ?>" class="inner">
      <?php print $row; ?>
    </a>
  </div>
<?php endforeach; ?>
