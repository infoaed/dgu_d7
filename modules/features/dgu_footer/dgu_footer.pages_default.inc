<?php
/**
 * @file
 * dgu_footer.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function dgu_footer_default_page_manager_pages() {

	/*
	 * The "Terms and conditions" page.
	 */

	$page = new stdClass();
	$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
	$page->api_version = 1;
	$page->name = 'kasutustingimused';
	$page->task = 'page';
	$page->admin_title = 'Kasutustingimused';
	$page->admin_description = '';
	$page->path = 'kasutustingimused';
	$page->access = array();
	$page->menu = array(
			'type' => 'normal',
			'title' => 'Kasutustingimused',
			'name' => 'menu-footer',
			'weight' => '1',
			'parent' => array(
					'type' => 'none',
					'title' => '',
					'name' => 'navigation',
					'weight' => '0',
			),
	);
	$page->arguments = array();
	$page->conf = array(
			'admin_paths' => FALSE,
	);
	$page->default_handlers = array();
	$handler = new stdClass();
	$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
	$handler->api_version = 1;
	$handler->name = 'page_kasutustingimused_panel_context';
	$handler->task = 'page';
	$handler->subtask = 'kasutustingimused';
	$handler->handler = 'panel_context';
	$handler->weight = 0;
	$handler->conf = array(
			'title' => 'Panel',
			'no_blocks' => 0,
			'pipeline' => 'standard',
			'body_classes_to_remove' => '',
			'body_classes_to_add' => '',
			'css_id' => 'terms-and-conditions',
			'css' => '',
			'contexts' => array(),
			'relationships' => array(),
	);
	$display = new panels_display();
	$display->layout = 'dgu_onecol';
	$display->layout_settings = array();
	$display->panel_settings = array(
			'style_settings' => array(
					'default' => NULL,
					'middle' => NULL,
			),
	);
	$display->cache = array();
	$display->title = '';
	$display->content = array();
	$display->panels = array();
	$pane = new stdClass();
	$pane->pid = 'new-1';
	$pane->panel = 'middle';
	$pane->type = 'custom';
	$pane->subtype = 'custom';
	$pane->shown = TRUE;
	$pane->access = array();
	$pane->configuration = array(
			'admin_title' => '',
			'title' => '',
			'body' => '<p><strong>Kasutustingimused</strong></p>

<p>Avaandmete põhimõtted näevad ette, et mistahes avaandmete hulgal peab olema litsents, mis võimaldab tema vaba, piiranguteta kasutamist, töötlemist ja levitamist, sealjuures võimaldama levitamist kasutaja valikul nii tasuta kui tasu eest. Näiteks levinud kasutuslitsentsid, mida avaandmete juures kasutatakse, pärinevad mittetulundusühingu <a href="http://et.wikipedia.org/wiki/Creative_Commons">Creative Commons</a> litsentside loetelust.</p>

<p>Antud portaalis avaldatud andmehulgad on üldjuhul kasutatavad litsentsi alusel, mis on andmehulga infos konkreetselt välja toodud. Kui andmehulga kasutuslitsents on mingil põhjusel märkimata, siis antud portaal loeb selleks vaikimisi Creative Commons&#39;i &quot;BY&quot; litsentsi <a href="http://creativecommons.org/licenses/by/4.0/deed.et">versioon 4.0</a>. Sama litsentsi alla käib ka kõigi antud portaalis registreeritud andmehulkade info.</p>

<p><strong>Avaldamise põhiprintsiibid</strong></p>

<p>Antud portaal eeldab, et kõik siin avaldatud andmehulgad ja nende kohta lisatud info on portaali poolt vabalt kasutatav, edasi jagatav ja taaskasutatv, ning teenib andmete avaldamise olulisi eesmärke, mis avalehel on loetletud. Selle eelduse tingib ka vaikimis Creative Commons BY litsent, mis plalpool märgitud. Foorumis avaldatud ideed ja küsimused, ning <a href="/apps">Rakenduste</a> all loetletud rakendused on avaldaja omad, ega kuulu mingi kasutuslitsentsi alla, välja arvatud kui on märgitud teisiti.</p>

<p>&nbsp;</p>
',
			'format' => 'filtered_html',
			'substitute' => TRUE,
	);
	$pane->cache = array();
	$pane->style = array(
			'settings' => NULL,
	);
	$pane->css = array();
	$pane->extras = array();
	$pane->position = 0;
	$pane->locks = array();
	$display->content['new-1'] = $pane;
	$display->panels['middle'][0] = 'new-1';
	$display->hide_title = PANELS_TITLE_FIXED;
	$display->title_pane = '0';
	$handler->conf['display'] = $display;
	$page->default_handlers[$handler->name] = $handler;
    $pages['terms_and_conditions'] = $page;

  /*
   * The "Contact" page.
   */

  $page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'kontaktid';
$page->task = 'page';
$page->admin_title = 'Kontaktid';
$page->admin_description = '';
$page->path = 'kontaktid';
$page->access = array(
  'type' => 'none',
  'settings' => NULL,
);
$page->menu = array(
  'type' => 'normal',
  'title' => 'Kontaktid',
  'name' => 'menu-footer',
  'weight' => '2',
  'parent' => array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
  ),
);
$page->arguments = array();
$page->conf = array(
  'admin_paths' => FALSE,
);
$page->default_handlers = array();
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_kontaktid_panel_context';
$handler->task = 'page';
$handler->subtask = 'kontaktid';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Panel',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => 'moderation-policy',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
);
$display = new panels_display();
$display->layout = 'onecol';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'left' => NULL,
    'right' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p><strong>Kontaktid</strong></p><p>Avaandmete üles laadimise või registreerimisega seotud küsimuste korral palume pöörduda aadressile <a href="mailto:opendatasupport@mkm.ee">opendatasupport@mkm.ee</a>.<br>Üles laetud või registreritud avaandmete kasutamisega seotud küsimuste korral palume pöörduda aadressile <a href="mailto:opendatahelp@mkm.ee">opendatahelp@mkm.ee</a>.</p>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-1'] = $pane;
  $display->panels['middle'][0] = 'new-1';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-1';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;
$pages['kontaktid'] = $page;

  /*
   * The "Abi" page.
   */

$page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'abi';
$page->task = 'page';
$page->admin_title = 'Abi';
$page->admin_description = '';
$page->path = 'abi';
$page->access = array();
$page->menu = array();
$page->arguments = array();
$page->conf = array(
  'admin_paths' => FALSE,
);
$page->default_handlers = array();
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_abi_panel_context';
$handler->task = 'page';
$handler->subtask = 'abi';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Panel',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
);
$display = new panels_display();
$display->layout = 'dgu_onecol';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'middle' => NULL,
  ),
);
$display->cache = array();
$display->title = 'Abi';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Abi',
    'title' => '',
    'body' => '<p><strong>Abiinfo portaali kasutamise kohta</strong></p><p>Informatsiooni andmehulkade lisamise kohta ning avaandmete temaatikast laiemalt leiate LISAINFO menüü valikute alt.</p><p>Kui Te nimetatud lehtedelt oma küsimustele vastust ei leia, siis palume abi saamiseks pöörduda järgmistele e-posti aadressidele:</p><p>Avaandmete üles laadimise või registreerimisega seotud küsimuste korral palume pöörduda aadressile <a href="mailto:opendatasupport@mkm.ee">opendatasupport@mkm.ee</a>.<br>Üles laetud või registreritud avaandmete kasutamisega seotud küsimuste korral palume pöörduda aadressile <a href="mailto:opendatahelp@mkm.ee">opendatahelp@mkm.ee</a>.</p>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-1'] = $pane;
  $display->panels['middle'][0] = 'new-1';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-1';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;
$pages['abi'] = $page;

  return $pages;

}
